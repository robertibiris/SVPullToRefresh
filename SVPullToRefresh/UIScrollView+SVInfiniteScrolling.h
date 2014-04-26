//
// UIScrollView+SVInfiniteScrolling.h
//
// Created by Sam Vermette on 23.04.12.
// Copyright (c) 2012 samvermette.com. All rights reserved.
//
// https://github.com/samvermette/SVPullToRefresh
//

#import <UIKit/UIKit.h>

@class SVInfiniteScrollingView;

@interface UIScrollView (SVInfiniteScrolling)

typedef NS_ENUM(NSUInteger, SVInfiniteScrollingPosition) {
    SVInfiniteScrollingPositionTop = 0,
    SVInfiniteScrollingPositionBottom,
};

- (void)addInfiniteScrollingWithActionHandler:(void (^)(void))actionHandler;
- (void)addInfiniteScrollingWithActionHandler:(void (^)(void))actionHandler position:(SVInfiniteScrollingPosition)position;
- (void)triggerInfiniteScrolling;

@property (nonatomic, strong, readonly) SVInfiniteScrollingView *infiniteScrollingView;
@property (nonatomic, assign) BOOL showsInfiniteScrolling;

@end


enum {
	SVInfiniteScrollingStateStopped = 0,
    SVInfiniteScrollingStateTriggered,
    SVInfiniteScrollingStateLoading,
    SVInfiniteScrollingStateAll = 10
};

typedef NSUInteger SVInfiniteScrollingState;

@interface SVInfiniteScrollingView : UIView

@property (nonatomic, readwrite) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
@property (nonatomic, readonly) SVInfiniteScrollingState state;
@property (nonatomic, readonly) SVInfiniteScrollingPosition position;
@property (nonatomic, readwrite) BOOL enabled;

//Designated initializer
- (id)initWithFrame:(CGRect)frame position:(SVInfiniteScrollingPosition)position;


- (void)setCustomView:(UIView *)view forState:(SVInfiniteScrollingState)state;

- (void)startAnimating;
- (void)stopAnimating;

@end

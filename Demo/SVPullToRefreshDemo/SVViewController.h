//
//  SVViewController.h
//  SVPullToRefreshDemo
//
//  Created by Sam Vermette on 23.04.12.
//  Copyright (c) 2012 samvermette.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SVViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITableView *tableView;

//determines if the pull-to-refresh and infiniteScrolling controls are in their natural order (pullToRefresh on the top and InfiniteScrolling from the Bottom) or vice-versa (reverse order)
@property(nonatomic, assign) BOOL controlsInverseOrder;

@end

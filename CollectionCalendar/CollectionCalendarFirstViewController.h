//
//  CollectionCalendarFirstViewController.h
//  CollectionCalendar
//
//  Created by Francisco Soares on 12/01/08.
//  Copyright (c) 2012年 アルゴ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Item.h"
@interface CollectionCalendarFirstViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
{
    NSArray *itemList;
}
@property(nonatomic,retain)NSArray *itemList;
@end

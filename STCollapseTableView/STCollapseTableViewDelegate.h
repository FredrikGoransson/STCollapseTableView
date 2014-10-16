//
//  STCollapseTableViewDelegate.h
//  TableViewManager
//
//  Created by Fredrik Göransson on 14/10/14.
//  Copyright (c) 2014 Forefront Consulting Group AB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol STCollapseTableViewDelegate <UITableViewDelegate>

-(void)tableView:(UITableView*)tableView didCloseSection:(NSUInteger)sectionIndex;
-(void)tableView:(UITableView*)tableView didOpenSection:(NSUInteger)sectionIndex;
                                                                  
@end

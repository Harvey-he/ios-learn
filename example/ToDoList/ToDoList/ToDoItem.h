//
//  ToDoItem.h
//  ToDoList
//
//  Created by harvey on 8/13/15.
//  Copyright (c) 2015 harvey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

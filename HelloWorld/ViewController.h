//
//  ViewController.h
//  HelloWorld
//
//  Created by shivam singh on 5/30/20.
//  Copyright © 2020 shivam singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
// To declare a property:
// 1. add @property keyword
// 2. list property attributes:
//      a> nonatomic - increases performance at the cost of thread-safety
//      b> strong - indicates that a pointer to the specified variable will
//                  stay in memory as long as the object that holds the
//                  pointer exists
// 3. declare the type of property i.e. NSArray* (pointer to NSArray class)
// 4. add property name i.e. myQuotes
@property (nonatomic, strong) NSArray *myQuotes;

// Once created you cannot add/remove elements in NSArray.
// Therefore, use NSMutableArray
@property (nonatomic, strong) NSMutableArray *movieQuotes;

@end


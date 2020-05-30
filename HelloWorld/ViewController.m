//
//  ViewController.m
//  HelloWorld
//
//  Created by shivam singh on 5/30/20.
//  Copyright © 2020 shivam singh. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    // 1 - Add array of personal quotes
    self.myQuotes = @[
                        @"Live and let live",
                        @"Don't cry over spilt milk",
                        @"Always look on the bright side of life",
                        @"Nobody's perfect",
                        @"Can't see the woods for the trees",
                        @"Better to have loved and lost then not loved at all",
                        @"The early bird catches the worm",
                        @"As slow as a wet week"
                        ];
}


@end

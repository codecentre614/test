//
//  DetailViewController.h
//  test
//
//  Created by Mark Franco on 2015-03-30.
//  Copyright (c) 2015 Mark Franco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


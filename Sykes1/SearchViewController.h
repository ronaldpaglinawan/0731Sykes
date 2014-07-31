//
//  SearchViewController.h
//  Sykes1
//
//  Created by Rhenz on 7/31/14.
//  Copyright (c) 2014 Bonafide Infotech Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController
- (IBAction)dismissButtonPressed:(id)sender;


@property (strong, nonatomic) IBOutlet UIView *bottomView;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;

@end

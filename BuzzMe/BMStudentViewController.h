//
//  BMStudentViewController.h
//  BuzzMe
//
//  Created by Tim Wong on 1/29/15.
//  Copyright (c) 2015 Tim Wong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <AVFoundation/AVFoundation.h>
#import "AppDelegate.h"
#import "BMStudentPlayGameViewController.h"

@interface BMStudentViewController : UIViewController <MCBrowserViewControllerDelegate>

@property (nonatomic, strong) AppDelegate *appDelegate;
@property (nonatomic, strong) UIButton *searchButton;
@property (nonatomic, strong) UIBarButtonItem *disconnectBarButton;
@property (nonatomic, strong) MCPeerID *teacherPeerID;

@property (nonatomic, strong) AVAudioPlayer *audioPlayer;



@end

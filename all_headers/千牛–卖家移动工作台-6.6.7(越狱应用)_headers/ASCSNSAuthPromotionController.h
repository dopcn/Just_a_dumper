//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ASCSNSStyleButton, NSString, UIButton, UINavigationController, UIView;

@interface ASCSNSAuthPromotionController : UIViewController
{
    UIView *_blackCover;
    UIView *_mainBlanket;
    UIButton *_closeButton;
    ASCSNSStyleButton *_goToAuthButton;
    UINavigationController *_navgationControllerToPush;
    NSString *_currentJDYuserID;
}

+ (_Bool)shouldShow;
@property(retain, nonatomic) NSString *currentJDYuserID; // @synthesize currentJDYuserID=_currentJDYuserID;
@property(nonatomic) __weak UINavigationController *navgationControllerToPush; // @synthesize navgationControllerToPush=_navgationControllerToPush;
- (void).cxx_destruct;
- (void)animateGoAway;
- (void)animateToKeyWindow;
- (void)didClickGoToAuthButton;
- (void)viewDidLoad;

@end


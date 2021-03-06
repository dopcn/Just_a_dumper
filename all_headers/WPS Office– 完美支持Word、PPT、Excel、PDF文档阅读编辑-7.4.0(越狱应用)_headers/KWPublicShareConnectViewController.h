//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KWPhoneShareConnectView, NSString;
@protocol KWShareConnectViewDelegate, KWShareDisplayDelegate;

@interface KWPublicShareConnectViewController : UIViewController
{
    NSString *_accessCode;
    id <KWShareDisplayDelegate> _displayDelegate;
    id <KWShareConnectViewDelegate> _shareDelegate;
    KWPhoneShareConnectView *_receivingView;
}

@property(retain, nonatomic) KWPhoneShareConnectView *receivingView; // @synthesize receivingView=_receivingView;
@property(nonatomic) id <KWShareConnectViewDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) id <KWShareDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(copy, nonatomic) NSString *accessCode; // @synthesize accessCode=_accessCode;
- (void)showDimensionCodeView:(id)arg1;
- (void)cancelDimensionalCodeScan:(id)arg1;
- (void)showReveivingView;
- (void)dismissViewController;
- (void)initLeftNavigationItem;
- (void)viewDidLoad;
- (void)dealloc;

@end


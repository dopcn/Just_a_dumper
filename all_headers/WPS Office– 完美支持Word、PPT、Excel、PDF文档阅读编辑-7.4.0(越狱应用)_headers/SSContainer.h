//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISSContainer-Protocol.h"

@class NSString, SSiPadViewController, UIViewController;

@interface SSContainer : NSObject <ISSContainer>
{
    UIViewController *_iPhoneViewController;
    SSiPadViewController *_iPadViewController;
}

@property(retain, nonatomic) SSiPadViewController *iPadViewController; // @synthesize iPadViewController=_iPadViewController;
@property(retain, nonatomic) UIViewController *iPhoneViewController; // @synthesize iPhoneViewController=_iPhoneViewController;
- (void).cxx_destruct;
- (void)setIPadContainerWithBarButtonItem:(id)arg1 arrowDirect:(unsigned long long)arg2;
- (void)setIPadContainerWithView:(id)arg1 rect:(struct CGRect)arg2 arrowDirect:(unsigned long long)arg3;
- (void)setIPadContainerWithView:(id)arg1 arrowDirect:(unsigned long long)arg2;
- (void)setIPhoneContainerWithViewController:(id)arg1;
- (id)getContainerViewControllerWithViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


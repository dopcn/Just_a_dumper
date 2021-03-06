//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericMegaphoneViewV2Delegate-Protocol.h"
#import "IGMegaphonePresenterProtocol-Protocol.h"

@class IGGenericMegaphone, IGUserSession, NSString;
@protocol IGGenericMegaphoneLogger, IGMegaphonePresenterDelegate;

@interface IGBrandedContentMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    IGUserSession *_userSession;
    IGGenericMegaphone *_megaphone;
    id <IGGenericMegaphoneLogger> _logger;
    NSString *_module;
    id <IGMegaphonePresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 logger:(id)arg2 userSession:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAPObject.h"

#import "QAPCallCenterAccessControllerDelegate-Protocol.h"

@protocol QAPCallCenterAccessControllerDelegate;

@interface QAPCallCenterAccessController : QAPObject <QAPCallCenterAccessControllerDelegate>
{
    id <QAPCallCenterAccessControllerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <QAPCallCenterAccessControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showConfirmationAlertOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)QAP_checkAccessToSyncCallModule:(id)arg1 method:(id)arg2 withParam:(id)arg3 qapInfo:(id)arg4;
- (_Bool)QAP_checkAccessToAsyncCallModule:(id)arg1 method:(id)arg2 withParam:(id)arg3 qapInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)checkAccessToSyncCallModule:(id)arg1 method:(id)arg2 withParam:(id)arg3 qapInfo:(id)arg4 accessChecked:(_Bool *)arg5;
- (_Bool)checkAccessToAsyncCallModule:(id)arg1 method:(id)arg2 withParam:(id)arg3 qapInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end


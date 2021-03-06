//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BridgeService.h"

#import "QRCodeScanDelegate-Protocol.h"
#import "SNSRecordAudioViewControllerDelegate-Protocol.h"

@class NSString, SNSRecordAudioViewController, UIView;

@interface YixinInputService : BridgeService <SNSRecordAudioViewControllerDelegate, QRCodeScanDelegate>
{
    UIView *_audioRecordingView;
    CDUnknownBlockType _audioRecordCB;
    CDUnknownBlockType _scanCB;
    SNSRecordAudioViewController *_recordingController;
}

@property(retain, nonatomic) SNSRecordAudioViewController *recordingController; // @synthesize recordingController=_recordingController;
- (void).cxx_destruct;
- (void)qRcodeScanSucess:(id)arg1 withImage:(id)arg2 withImageCodeType:(long long)arg3;
- (void)barcodeScan:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)snsRecordAudioViewControllerDidCancel:(id)arg1;
- (void)audioRecordTimeTooShort;
- (void)snsRecordAudioViewController:(id)arg1 didFinish:(id)arg2 duration:(long long)arg3;
- (void)snsRecordAudioViewController:(id)arg1 didBegin:(id)arg2;
- (void)stopRecord;
- (void)recordAudio:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


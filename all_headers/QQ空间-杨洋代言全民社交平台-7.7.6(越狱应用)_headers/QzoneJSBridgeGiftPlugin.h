//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQJSBridgePluginHelper.h"

#import "QZH5GiftVoiceRecordManagerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, QZH5GiftVoiceRecordManager, UIImage;

@interface QzoneJSBridgeGiftPlugin : QQJSBridgePluginHelper <QZH5GiftVoiceRecordManagerDelegate>
{
    NSMutableDictionary *_downloadGiftMap;
    NSDictionary *_startRecordDict;
    NSDictionary *_stopRecordDict;
    NSDictionary *_playRecordDict;
    NSDictionary *_stopPlayRecordDict;
    QZH5GiftVoiceRecordManager *_h5GiftRecordManager;
    UIImage *_thumbImg;
}

+ (id)dictToGiftContext:(id)arg1;
+ (id)dictToTemplateGiftItem:(id)arg1;
+ (id)dictToGiftItem:(id)arg1;
@property(retain, nonatomic) UIImage *thumbImg; // @synthesize thumbImg=_thumbImg;
@property(retain, nonatomic) QZH5GiftVoiceRecordManager *h5GiftRecordManager; // @synthesize h5GiftRecordManager=_h5GiftRecordManager;
@property(retain, nonatomic) NSDictionary *stopPlayRecordDict; // @synthesize stopPlayRecordDict=_stopPlayRecordDict;
@property(retain, nonatomic) NSDictionary *playRecordDict; // @synthesize playRecordDict=_playRecordDict;
@property(retain, nonatomic) NSDictionary *stopRecordDict; // @synthesize stopRecordDict=_stopRecordDict;
@property(retain, nonatomic) NSDictionary *startRecordDict; // @synthesize startRecordDict=_startRecordDict;
@property(retain, nonatomic) NSMutableDictionary *downloadGiftMap; // @synthesize downloadGiftMap=_downloadGiftMap;
- (void).cxx_destruct;
- (_Bool)didDeleteEnd;
- (void)willStartPlay;
- (void)getThumbImageWithUrl:(id)arg1;
- (void)didEndPlay:(id)arg1;
- (void)playRecord:(id)arg1;
- (void)beginPlay:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_stopPlayRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_playRecord:(id)arg1;
- (void)recordFail:(id)arg1 error:(int)arg2;
- (void)didRecordEnd:(id)arg1;
- (void)recordData:(id)arg1 recordTime:(float)arg2 extraParams:(id)arg3;
- (void)recordReady:(id)arg1;
- (id)createGiftItemFromGiftContext:(id)arg1 andGiftItem:(id)arg2;
- (id)createNormalSendItemFromGiftItem:(id)arg1 giftContext:(id)arg2;
- (id)createGiftTaskModelFromGiftItem:(id)arg1 andContext:(id)arg2;
- (void)handleJsBridgeRequest_qzgift_sendGift:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_deleteRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_restartRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_isThereRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_stopRecord:(id)arg1;
- (_Bool)handleJsBridgeRequest_qzgift_startRecord:(id)arg1;
- (void)handleJsBridgeRequest_qzgift_requestRecordPrivilege:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


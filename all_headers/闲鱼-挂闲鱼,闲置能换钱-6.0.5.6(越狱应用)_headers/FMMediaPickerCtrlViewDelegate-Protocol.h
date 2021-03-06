//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AliyunPasterInfo;

@protocol FMMediaPickerCtrlViewDelegate <NSObject>
- (void)onSelectFilter:(int)arg1;
- (void)onPasterBarShow:(_Bool)arg1;
- (void)onPreviewState:(_Bool)arg1;
- (void)onSetFocusPoint:(struct CGPoint)arg1;
- (void)onSelectPaster:(AliyunPasterInfo *)arg1;
- (void)onFlashAction:(_Bool)arg1;
- (void)onSwitchOutputSize:(void (^)(unsigned long long))arg1;
- (void)onTakePhotoAction:(void (^)(UIImage *, UIImage *, long long, void (^)(void)))arg1;
- (void)onFinishRecordAction;
- (void)onDelectRecordAction;
- (void)onCancelRecordAction;
- (void)onSwitchCameraAction:(void (^)(long long))arg1;
- (void)onPauseRecordAction:(void (^)(void))arg1;
- (void)onStartRecordAction;
@end


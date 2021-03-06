//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoRoomBaseSubPresenter.h"

@interface YoyoRoomAdmirePresenter : YoyoRoomBaseSubPresenter
{
    long long _admireCount;
    unsigned long long _admireState;
    long long _lastServerAdmireCount;
}

@property(nonatomic) long long lastServerAdmireCount; // @synthesize lastServerAdmireCount=_lastServerAdmireCount;
@property(nonatomic) unsigned long long admireState; // @synthesize admireState=_admireState;
@property(nonatomic) long long admireCount; // @synthesize admireCount=_admireCount;
- (void)delayPollAdmire;
- (void)requestAdmireWithCount:(long long)arg1;
- (void)requestAdmireForPoll;
- (void)requestAdmireForLocalClick;
- (void)requestAdmireForInit;
- (_Bool)couldRequestAdmire;
- (void)localAddOneAdmire;
- (id)roomRecord;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)updateForAdmireStateChanged;
- (void)onServerEnd:(id)arg1;
- (void)onServerCallback:(id)arg1 data:(id)arg2 reqEntry:(id)arg3;
- (void)onClose;
- (void)onOpen;
- (void)onInitData;

@end


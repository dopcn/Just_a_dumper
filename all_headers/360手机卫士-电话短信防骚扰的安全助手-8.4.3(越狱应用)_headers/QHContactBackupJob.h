//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOperation.h"

@class NSArray, NSData, NSDate, NSError;
@protocol QHContactBackupJobDelegate;

@interface QHContactBackupJob : QOperation
{
    QOperation *_operation;
    NSArray *_dataArray;
    _Bool networkPaused;
    int _state;
    NSError *_error;
    long long _contactNumber;
    long long _currentIndex;
    long long _totalNumber;
    id <QHContactBackupJobDelegate> _delegate;
    NSData *_contactData;
    long long networkUsage;
    NSDate *_upLoadDate;
}

@property(readonly, nonatomic) NSDate *upLoadDate; // @synthesize upLoadDate=_upLoadDate;
@property(nonatomic) _Bool networkPaused; // @synthesize networkPaused;
@property(nonatomic) long long networkUsage; // @synthesize networkUsage;
@property(readonly, nonatomic) NSData *contactData; // @synthesize contactData=_contactData;
@property(nonatomic) __weak id <QHContactBackupJobDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) long long totalNumber; // @synthesize totalNumber=_totalNumber;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) long long contactNumber; // @synthesize contactNumber=_contactNumber;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)fireBackupUpdateProgress:(id)arg1;
- (void)fireBackupStateChange;
- (void)fireBackupError;
- (void)fireBackupFinished;
- (void)onCompleteUpload:(id)arg1;
- (void)asyncUpload;
- (void)onCompleteCompress:(id)arg1;
- (void)compress:(id)arg1;
- (void)onUpdateSerializeState:(id)arg1;
- (void)onCompleteSerialize:(id)arg1;
- (void)serialize;
- (_Bool)resumeNetwork;
- (_Bool)pauseNetwork;
- (void)cancel;
- (void)start;
- (id)init;

@end


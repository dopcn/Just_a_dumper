//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol GJGCConsultDataInterface <NSObject>
- (id)getInformationTitleData;
- (void)saveInformationTitleData:(id)arg1;
- (NSString *)getTitleOfTitleView;
- (void)saveTitleOfTitleView:(NSString *)arg1;
- (unsigned long long)getMasterId;
- (void)saveMasterId:(unsigned long long)arg1;
- (id)getInformationUpdateDate;
- (void)saveInformationUpdateDate:(id)arg1;
- (id)getInformationSaveDate:(unsigned long long)arg1;
- (void)saveInformationSaveDate:(id)arg1 masterId:(unsigned long long)arg2;
- (NSString *)getInformationNoReadNum;
- (void)saveInformationNoReadNum:(NSString *)arg1;
- (id)getInformationData;
- (void)saveInformationData:(id)arg1;
- (_Bool)getIsUserDeletInformation;
- (void)saveIsUserDeletInformation:(_Bool)arg1;
- (id)getServerTime;
- (void)saveServerTime:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PAApi_SIMS_ConsultingMessageListResult : NSObject
{
    long long _userId;
    long long _doctorId;
    NSString *_doctorName;
    NSString *_userImgUrl;
    NSString *_userName;
    NSString *_docImgUrl;
    NSString *_position;
    NSString *_deptName;
    NSMutableArray *_messageList;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList=_messageList;
@property(retain, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *docImgUrl; // @synthesize docImgUrl=_docImgUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userImgUrl; // @synthesize userImgUrl=_userImgUrl;
@property(retain, nonatomic) NSString *doctorName; // @synthesize doctorName=_doctorName;
@property(nonatomic) long long doctorId; // @synthesize doctorId=_doctorId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end


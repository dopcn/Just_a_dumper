//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface NEADataTrackModel : RLMObject
{
    NSString *_pid;
    NSString *_targetId;
    long long _type;
    long long _operation;
    long long _source;
    long long _uploadStatus;
    long long _timeSpan;
    NSString *_jsonDataString;
}

+ (id)jsonStringWithData:(id)arg1;
+ (id)dataModelWithPid:(id)arg1 targetID:(id)arg2 type:(long long)arg3 operation:(long long)arg4;
+ (id)ignoredProperties;
+ (id)primaryKey;
@property(copy, nonatomic) NSString *jsonDataString; // @synthesize jsonDataString=_jsonDataString;
@property(nonatomic) long long timeSpan; // @synthesize timeSpan=_timeSpan;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYBaseModel.h"

@class NSArray, NSString;

@interface QNMarketingActivityModel : JDYBaseModel
{
    _Bool _bIsTaobaoDomain;
    long long _activityId;
    NSString *_activityTitle;
    NSString *_activityDescription;
    long long _status;
    NSString *_activityStartTime;
    NSString *_activityEndTime;
    NSString *_signUpStartTime;
    NSString *_signUpEndTime;
    long long _count;
    long long _scene;
    long long _type;
    NSString *_typeName;
    NSString *_activityURL;
    NSArray *_subList;
    NSString *_warnupStartTime;
    NSString *_warnupEndTime;
    NSString *_imageURL;
    long long _campLevel;
    long long _bmConfigCount;
}

+ (id)tmallMarketingActivityModelWithDict:(id)arg1;
+ (id)taobaoMarketingActivityModelWithDict:(id)arg1;
@property(nonatomic) long long bmConfigCount; // @synthesize bmConfigCount=_bmConfigCount;
@property(nonatomic) long long campLevel; // @synthesize campLevel=_campLevel;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *warnupEndTime; // @synthesize warnupEndTime=_warnupEndTime;
@property(retain, nonatomic) NSString *warnupStartTime; // @synthesize warnupStartTime=_warnupStartTime;
@property(retain, nonatomic) NSArray *subList; // @synthesize subList=_subList;
@property(retain, nonatomic) NSString *activityURL; // @synthesize activityURL=_activityURL;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *signUpEndTime; // @synthesize signUpEndTime=_signUpEndTime;
@property(retain, nonatomic) NSString *signUpStartTime; // @synthesize signUpStartTime=_signUpStartTime;
@property(retain, nonatomic) NSString *activityEndTime; // @synthesize activityEndTime=_activityEndTime;
@property(retain, nonatomic) NSString *activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end


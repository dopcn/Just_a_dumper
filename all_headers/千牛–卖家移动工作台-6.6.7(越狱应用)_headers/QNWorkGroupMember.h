//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JDYECEmployee, NSNumber, NSString;

@interface QNWorkGroupMember : NSObject
{
    NSNumber *_memberId;
    NSNumber *_feature;
    NSNumber *_groupId;
    NSNumber *_deliver;
    NSNumber *_status;
    NSString *_groupName;
    JDYECEmployee *_employee;
}

+ (id)workGroupMemberWithDic:(id)arg1;
@property(retain, nonatomic) JDYECEmployee *employee; // @synthesize employee=_employee;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *deliver; // @synthesize deliver=_deliver;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSNumber *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSNumber *memberId; // @synthesize memberId=_memberId;
- (void).cxx_destruct;

@end


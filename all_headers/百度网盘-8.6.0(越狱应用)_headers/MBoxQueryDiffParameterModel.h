//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBoxQueryDiffParameterModel : NSObject
{
    NSString *_singleMarkedTime;
    NSString *_singleRelationListTime;
    NSString *_groupListTime;
    NSString *_groupMsgMarkedTime;
}

@property(copy, nonatomic) NSString *groupMsgMarkedTime; // @synthesize groupMsgMarkedTime=_groupMsgMarkedTime;
@property(copy, nonatomic) NSString *groupListTime; // @synthesize groupListTime=_groupListTime;
@property(copy, nonatomic) NSString *singleRelationListTime; // @synthesize singleRelationListTime=_singleRelationListTime;
@property(copy, nonatomic) NSString *singleMarkedTime; // @synthesize singleMarkedTime=_singleMarkedTime;
- (void).cxx_destruct;
- (id)toDic;

@end


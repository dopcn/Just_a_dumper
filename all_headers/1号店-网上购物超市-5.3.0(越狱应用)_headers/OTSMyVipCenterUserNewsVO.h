//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSNumber, NSString;

@interface OTSMyVipCenterUserNewsVO : OTSValueObject
{
    NSString *_gradeName;
    NSString *_nextGradeName;
    NSNumber *_codeId;
    NSNumber *_updateTime;
    NSNumber *_grade;
    NSNumber *_exp;
    NSNumber *_nextGradeExpNeed;
    NSNumber *_nextGrade;
    NSNumber *_endUserId;
    NSNumber *_createTime;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber *endUserId; // @synthesize endUserId=_endUserId;
@property(retain, nonatomic) NSNumber *nextGrade; // @synthesize nextGrade=_nextGrade;
@property(retain, nonatomic) NSNumber *nextGradeExpNeed; // @synthesize nextGradeExpNeed=_nextGradeExpNeed;
@property(retain, nonatomic) NSNumber *exp; // @synthesize exp=_exp;
@property(retain, nonatomic) NSNumber *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSNumber *codeId; // @synthesize codeId=_codeId;
@property(retain, nonatomic) NSString *nextGradeName; // @synthesize nextGradeName=_nextGradeName;
@property(retain, nonatomic) NSString *gradeName; // @synthesize gradeName=_gradeName;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CTMemberGradeUpCommitResultModel : NSObject
{
    NSString *_resultCode;
    NSString *_resultMsg;
    NSString *_originalGrade;
    NSString *_upGradeRemark;
}

@property(retain, nonatomic) NSString *upGradeRemark; // @synthesize upGradeRemark=_upGradeRemark;
@property(retain, nonatomic) NSString *originalGrade; // @synthesize originalGrade=_originalGrade;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (void)initData;
- (id)init;

@end


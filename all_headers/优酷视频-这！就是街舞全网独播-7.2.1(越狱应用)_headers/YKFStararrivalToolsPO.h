//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSString;
@protocol YKFStararrivalToolDetailPO;

@interface YKFStararrivalToolsPO : YKFAPIModel
{
    NSString *_newActWarnText;
    NSArray<YKFStararrivalToolDetailPO> *_toolDetailVOList;
}

@property(retain, nonatomic) NSArray<YKFStararrivalToolDetailPO> *toolDetailVOList; // @synthesize toolDetailVOList=_toolDetailVOList;
@property(retain, nonatomic, getter=getNewActWarnText) NSString *newActWarnText; // @synthesize newActWarnText=_newActWarnText;
- (void).cxx_destruct;

@end


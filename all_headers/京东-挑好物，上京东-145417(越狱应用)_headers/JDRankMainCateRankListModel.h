//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSMutableArray, NSString;

@interface JDRankMainCateRankListModel : JDModel
{
    int _timeSwitch;
    NSMutableArray *_catelist;
    NSString *_cateContent;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *cateContent; // @synthesize cateContent=_cateContent;
@property(retain, nonatomic) NSMutableArray *catelist; // @synthesize catelist=_catelist;
@property(nonatomic) int timeSwitch; // @synthesize timeSwitch=_timeSwitch;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


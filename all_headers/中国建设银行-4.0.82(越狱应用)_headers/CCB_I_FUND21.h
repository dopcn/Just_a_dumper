//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseRequestModel.h"

@class NSString;

@interface CCB_I_FUND21 : CCBBaseRequestModel
{
    NSString *_fundcode;
    NSString *_marketcode;
    NSString *_curpage;
    NSString *_recper;
}

@property(retain, nonatomic) NSString *recper; // @synthesize recper=_recper;
@property(retain, nonatomic) NSString *curpage; // @synthesize curpage=_curpage;
@property(retain, nonatomic) NSString *marketcode; // @synthesize marketcode=_marketcode;
@property(retain, nonatomic) NSString *fundcode; // @synthesize fundcode=_fundcode;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttSearchInputAssWordRichMediaDataInfo.h"

@class NSMutableArray, NSString;

@interface MttSearchInputAssWordLotteryInfo : MttSearchInputAssWordRichMediaDataInfo
{
    NSString *_name;
    NSString *_term;
    NSString *_date;
    NSMutableArray *_redBall;
    NSMutableArray *_blueBall;
}

@property(retain) NSMutableArray *blueBall; // @synthesize blueBall=_blueBall;
@property(retain) NSMutableArray *redBall; // @synthesize redBall=_redBall;
@property(retain) NSString *date; // @synthesize date=_date;
@property(retain) NSString *term; // @synthesize term=_term;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)historyViewWithFrame:(struct CGRect)arg1;
- (id)DataInfoViewWithFrame:(struct CGRect)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


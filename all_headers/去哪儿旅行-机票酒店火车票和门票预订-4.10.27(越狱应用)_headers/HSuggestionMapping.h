//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HSuggestionMapping : NSObject
{
    NSString *_fullCN;
    NSString *_simplifiedCN1;
    NSString *_simplifiedCN2;
    NSString *_pinyin1;
    NSString *_pinyin2;
    NSString *_pinyin3;
    NSString *_acronym1;
    NSString *_acronym2;
}

@property(readonly, nonatomic, getter=shortPinYin2) NSString *acronym2; // @synthesize acronym2=_acronym2;
@property(readonly, nonatomic, getter=shortPinYin1) NSString *acronym1; // @synthesize acronym1=_acronym1;
@property(readonly, nonatomic, getter=pinYin3) NSString *pinyin3; // @synthesize pinyin3=_pinyin3;
@property(readonly, nonatomic, getter=pinYin2) NSString *pinyin2; // @synthesize pinyin2=_pinyin2;
@property(readonly, nonatomic, getter=pinYin1) NSString *pinyin1; // @synthesize pinyin1=_pinyin1;
@property(readonly, nonatomic, getter=shortName2) NSString *simplifiedCN2; // @synthesize simplifiedCN2=_simplifiedCN2;
@property(readonly, nonatomic, getter=shortName1) NSString *simplifiedCN1; // @synthesize simplifiedCN1=_simplifiedCN1;
@property(readonly, nonatomic, getter=fullName) NSString *fullCN; // @synthesize fullCN=_fullCN;
- (void).cxx_destruct;

@end


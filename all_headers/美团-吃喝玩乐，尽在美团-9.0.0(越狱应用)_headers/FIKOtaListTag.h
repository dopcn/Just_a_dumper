//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface FIKOtaListTag : SAKDomainObject
{
    NSString *_content;
    NSString *_color;
    NSString *_specialContent;
    NSString *_specialColor;
    NSString *_priceContent;
    NSString *_priceColor;
    NSString *_title;
    NSString *_fontSize;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) NSString *priceContent; // @synthesize priceContent=_priceContent;
@property(retain, nonatomic) NSString *specialColor; // @synthesize specialColor=_specialColor;
@property(retain, nonatomic) NSString *specialContent; // @synthesize specialContent=_specialContent;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end


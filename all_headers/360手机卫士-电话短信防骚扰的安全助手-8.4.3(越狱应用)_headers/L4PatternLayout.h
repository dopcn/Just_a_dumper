//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "L4Layout.h"

@class NSMutableArray, NSString;

@interface L4PatternLayout : L4Layout
{
    NSString *conversionPattern;
    id parserDelegate;
    id converterDelegate;
    NSMutableArray *tokenArray;
}

- (id)tokenArray;
- (_Bool)convertTokenString:(id)arg1 withLoggingEvent:(id)arg2 intoString:(id *)arg3;
- (void)parseConversionPattern:(id)arg1 intoArray:(id *)arg2;
- (id)format:(id)arg1;
- (void)setConverterDelegate:(id)arg1;
- (id)converterDelegate;
- (void)setParserDelegate:(id)arg1;
- (id)parserDelegate;
- (void)setConversionPattern:(id)arg1;
- (id)conversionPattern;
- (void)dealloc;
- (id)initWithConversionPattern:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BBADeleteNovelHistoryResultParser : NSObject
{
    NSString *_status;
    NSString *_name;
    int curParserStep;
    NSString *_curParserAction;
}

@property(retain, nonatomic) NSString *curParserAction; // @synthesize curParserAction=_curParserAction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (void)parseElement:(const char *)arg1 attrs:(const char **)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface BDNGStructShowText : JSONModel
{
    NSString<Optional> *_text_content;
    NSNumber<Optional> *_is_tail;
    NSString<Optional> *_tail_mark;
    NSString<Optional> *_head_mark;
    NSNumber<Optional> *_display_style;
}

@property(retain, nonatomic) NSNumber<Optional> *display_style; // @synthesize display_style=_display_style;
@property(retain, nonatomic) NSString<Optional> *head_mark; // @synthesize head_mark=_head_mark;
@property(retain, nonatomic) NSString<Optional> *tail_mark; // @synthesize tail_mark=_tail_mark;
@property(retain, nonatomic) NSNumber<Optional> *is_tail; // @synthesize is_tail=_is_tail;
@property(retain, nonatomic) NSString<Optional> *text_content; // @synthesize text_content=_text_content;
- (void).cxx_destruct;

@end


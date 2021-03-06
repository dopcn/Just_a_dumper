//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString, TBRichStyle, UIImage;

@interface TBRichItem : NSObject <NSCopying, NSMutableCopying>
{
    long long _tag;
    NSString *_text;
    NSString *_textCopy;
    UIImage *_image;
    TBRichStyle *_style;
    TBRichStyle *_highlightStyle;
    id _data;
    struct CGRect _picRect;
}

@property(nonatomic) struct CGRect picRect; // @synthesize picRect=_picRect;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) TBRichStyle *highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(retain, nonatomic) TBRichStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *textCopy; // @synthesize textCopy=_textCopy;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface XHEmotionItemData : NSObject
{
    unsigned long long _index;
    NSString *_title;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initWithIndex:(unsigned long long)arg1 title:(id)arg2 icon:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEAChannelSlideItem : NSObject
{
    _Bool _selected;
    double _itemWidth;
    NSString *_title;
    unsigned long long _index;
    struct CGSize _titleSize;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(readonly, nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BDWTConfirmBodyItem : NSObject
{
    _Bool _hasMore;
    int _itemType;
    NSString *_titleString;
    NSString *_descString;
    NSString *_canuseString;
    NSString *_manjianString;
    unsigned long long _fontStyle;
}

@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(retain, nonatomic) NSString *manjianString; // @synthesize manjianString=_manjianString;
@property(retain, nonatomic) NSString *canuseString; // @synthesize canuseString=_canuseString;
@property(retain, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;

@end


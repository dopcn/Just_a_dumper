//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKTableViewItem.h"

@class NSString;

@interface SearchAssociateWordItem : PKTableViewItem
{
    int _type;
    CDUnknownBlockType _accessoryButtonDidClickBlock;
    NSString *_word;
    NSString *_highlight;
    NSString *_category;
    NSString *_clickEvent;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *clickEvent; // @synthesize clickEvent=_clickEvent;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonDidClickBlock; // @synthesize accessoryButtonDidClickBlock=_accessoryButtonDidClickBlock;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WBSingleSelectorModel : NSObject
{
    _Bool _completed;
    NSString *_title;
    NSString *_optionKey;
    NSString *_optionValue;
    NSString *_showKey;
    NSDictionary *_itemDefault;
    NSArray *_itemsArray;
}

@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(copy, nonatomic) NSDictionary *itemDefault; // @synthesize itemDefault=_itemDefault;
@property(copy, nonatomic) NSString *showKey; // @synthesize showKey=_showKey;
@property(copy, nonatomic) NSString *optionValue; // @synthesize optionValue=_optionValue;
@property(copy, nonatomic) NSString *optionKey; // @synthesize optionKey=_optionKey;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)reformerWithData:(id)arg1;
- (void)makeFakeData;
- (id)initWithData:(id)arg1;

@end


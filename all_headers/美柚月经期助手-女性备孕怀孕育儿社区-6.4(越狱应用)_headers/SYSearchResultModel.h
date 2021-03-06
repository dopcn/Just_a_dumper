//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SYSearchResultModel : NSObject
{
    _Bool _more;
    NSString *_keyword;
    NSString *_type;
    unsigned long long _search_type;
    NSArray *_items;
    NSString *_more_url;
}

+ (id)getSearchResultTypeString:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *more_url; // @synthesize more_url=_more_url;
@property(nonatomic) _Bool more; // @synthesize more=_more;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long search_type; // @synthesize search_type=_search_type;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)switchToModels;
- (id)getSectionModel;
- (id)getCategoryName;

@end


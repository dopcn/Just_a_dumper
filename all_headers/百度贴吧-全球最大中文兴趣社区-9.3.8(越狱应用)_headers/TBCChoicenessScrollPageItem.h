//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TBCTableView;

@interface TBCChoicenessScrollPageItem : NSObject
{
    _Bool _hasMore;
    _Bool _isLoaded;
    NSString *_tagCode;
    NSString *_pageNumber;
    NSString *_legoPageID;
    TBCTableView *_tableView;
}

@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) TBCTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *legoPageID; // @synthesize legoPageID=_legoPageID;
@property(copy, nonatomic) NSString *pageNumber; // @synthesize pageNumber=_pageNumber;
@property(copy, nonatomic) NSString *tagCode; // @synthesize tagCode=_tagCode;
- (void).cxx_destruct;
- (void)dealloc;

@end


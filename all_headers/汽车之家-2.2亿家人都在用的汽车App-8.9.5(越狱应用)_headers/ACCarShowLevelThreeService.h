//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRootService.h>

@class NSMutableArray, NSString;

@interface ACCarShowLevelThreeService : AHRootService
{
    _Bool _isloadmore;
    _Bool _isDropDown;
    NSMutableArray *_listArray;
    NSString *_pageId;
}

@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool isDropDown; // @synthesize isDropDown=_isDropDown;
@property(nonatomic) _Bool isloadmore; // @synthesize isloadmore=_isloadmore;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
- (void).cxx_destruct;
- (void)requestDataByShowID:(id)arg1 tid:(id)arg2 refreshState:(_Bool)arg3;
- (_Bool)parseJSON:(id)arg1;
- (id)init;

@end


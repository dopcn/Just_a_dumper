//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPagesCreatePageCategoriesHandler, FBUserSession;

@interface FBPageCreationCategoryDataFetcher : NSObject
{
    FBUserSession *_session;
    FBPagesCreatePageCategoriesHandler *_handler;
}

- (void).cxx_destruct;
- (void)fetchCatgorySuggestionWithPageName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchSuperCategoriesData;
- (void)fetchSubCategoriesDataWithSuperCategoryId:(id)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2;

@end


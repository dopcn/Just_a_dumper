//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface JMTopicViewModel : NSObject
{
    NSArray *_listModels;
}

@property(retain, nonatomic) NSArray *listModels; // @synthesize listModels=_listModels;
- (void).cxx_destruct;
- (void)requestNextTopicCommentOrProductListWithCategory:(id)arg1 tagId:(id)arg2 categoryTag:(id)arg3 tab:(id)arg4 sort:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestTopicCommentOrProductListWithCategory:(id)arg1 tagId:(id)arg2 categoryTag:(id)arg3 tab:(id)arg4 sort:(id)arg5 pageNum:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (id)listViewModelForIndex:(long long)arg1;
- (long long)indexListViewModelForCategory:(id)arg1;
- (id)listViewModelForCategory:(id)arg1;

@end


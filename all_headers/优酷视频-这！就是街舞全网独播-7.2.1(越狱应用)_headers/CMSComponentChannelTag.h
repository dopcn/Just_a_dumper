//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMSComponent.h"

#import "WordsCellDelegate-Protocol.h"

@class NSMutableArray, NSString, WordsLayoutManager;

@interface CMSComponentChannelTag : CMSComponent <WordsCellDelegate>
{
    WordsLayoutManager *_wordsLayoutManager;
    NSMutableArray *_cardVideos;
}

@property(retain, nonatomic) NSMutableArray *cardVideos; // @synthesize cardVideos=_cardVideos;
@property(retain, nonatomic) WordsLayoutManager *wordsLayoutManager; // @synthesize wordsLayoutManager=_wordsLayoutManager;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)wordsCellDidSelectWordAtIndex:(long long)arg1;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


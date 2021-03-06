//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseDataSource.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImage;

@interface FeedHotTypeDataSource : BaseDataSource <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _selected;
    NSMutableArray *_hotTypeModelList;
    UIImage *_prImage;
    UIImage *_bgImage;
}

@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIImage *prImage; // @synthesize prImage=_prImage;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSMutableArray *hotTypeModelList; // @synthesize hotTypeModelList=_hotTypeModelList;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


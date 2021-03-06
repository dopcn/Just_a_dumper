//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJUIViewController.h"

@class CMStarView, CMStarViewModel, NSNumber;

@interface CMStarViewController : MJUIViewController
{
    NSNumber *_coterieID;
    CMStarViewModel *_model;
    CMStarView *_starView;
}

@property(retain, nonatomic) CMStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) CMStarViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSNumber *coterieID; // @synthesize coterieID=_coterieID;
- (void).cxx_destruct;
- (void)p_buildModel;
- (void)p_buildStarView;
- (void)didReceiveMemoryWarning;
- (void)requestList;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoterieID:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWriteAnnotationViewController.h"

@class RKActivity;

@interface TBShareAnnotationViewController : TBWriteAnnotationViewController
{
    RKActivity *_activity;
}

@property(readonly, nonatomic) RKActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithActivity:(id)arg1 abstractText:(id)arg2;
- (id)initWithActivity:(id)arg1 worksContext:(id)arg2 externalLocation:(CDStruct_c009b3df)arg3;
- (id)initWithOptions:(unsigned long long)arg1 abstractText:(id)arg2 editableContent:(id)arg3;
- (id)initWithWorksContext:(id)arg1 externalLocation:(CDStruct_c009b3df)arg2 options:(unsigned long long)arg3 editableContent:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, PicassoInput, PicassoView, RACSignal, RACSubject;

@interface PicassoModuleCell : UITableViewCell
{
    NSString *_jsName;
    NSString *_data;
    NSString *_jsContent;
    RACSignal *_computeCompleteSignal;
    PicassoView *_picassoView;
    PicassoInput *_input;
    RACSubject *_subject;
}

@property(retain, nonatomic) RACSubject *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) PicassoInput *input; // @synthesize input=_input;
@property(retain, nonatomic) PicassoView *picassoView; // @synthesize picassoView=_picassoView;
@property(readonly, nonatomic) RACSignal *computeCompleteSignal; // @synthesize computeCompleteSignal=_computeCompleteSignal;
@property(copy, nonatomic) NSString *jsContent; // @synthesize jsContent=_jsContent;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *jsName; // @synthesize jsName=_jsName;
- (void).cxx_destruct;
- (void)dealloc;
- (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


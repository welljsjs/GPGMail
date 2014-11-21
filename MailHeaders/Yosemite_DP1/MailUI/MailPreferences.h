/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPreferences.h"

@interface MailPreferences : NSPreferences
{
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (void)configureFetchFrequencyPopUp:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)fontManager:(id)arg1 willIncludeFont:(id)arg2;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)changeFont:(id)arg1;
- (id)windowTitle;

@end
